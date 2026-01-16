#include <stdio.h>

int main() {
    int arr[2] = {10, 20};
    int *ptr = &arr[1];  // Point to the second element
    
    printf("Array elements: [%d, %d]\n", arr[0], arr[1]);
    printf("Initial pointer address (pointing to 20): %p\n", (void*)ptr);
    printf("Value at initial pointer: %d\n", *ptr);
    
    ptr = ptr - 1;  // or simply: ptr--;
    
    printf("Address after decrement: %p\n", (void*)ptr);
    printf("Value at new pointer address: %d\n", *ptr);
    
    return 0;
}
```

**Key concepts:**

1. **`&arr[1]`** - Gets the address of the second element (index 1) of the array.

2. **Pointer decrement** - Just like increment, `ptr--` or `ptr = ptr - 1` moves the pointer backward by `sizeof(int)` bytes.

3. **Array traversal** - You can navigate arrays in both directions using pointer arithmetic.

**What's happening:**
1. `arr[0]` is at some address (e.g., `0x...d4`)
2. `arr[1]` is 4 bytes later (e.g., `0x...d8`)
3. `ptr` initially points to `arr[1]`
4. After `ptr--`, it moves back 4 bytes and now points to `arr[0]`

**Visualizing memory:**
```
Memory:     [  10  ] [  20  ]
Address:    0x...d4  0x...d8
            ↑        ↑
            arr[0]   arr[1]
                     ↑
                   ptr (initially)
            ↑
          ptr (after ptr--)
