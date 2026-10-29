@interface WAEJBindingTextMetrics : WAEJBindingBase
{
    struct metrics; // +0x20
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 metrics:(struct)arg3;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_actualBoundingBoxAscent;
+ (void *)_ptr_to_get_actualBoundingBoxDescent;
- (OpaqueJSValue *)_get_width:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_actualBoundingBoxAscent:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_actualBoundingBoxDescent:(OpaqueJSContext *)arg1;
@end

