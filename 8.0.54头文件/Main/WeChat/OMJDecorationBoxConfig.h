@interface OMJDecorationBoxConfig : NSObject
{
    OMJID * _segmentID; // +0x8
    NSArray * _boxItems; // +0x10
    NSArray * _titles; // +0x18
    OMJHandleBoxBorderStyle * _borderStyle; // +0x20
    UIEdgeInsets _edgeInsets; // +0x28
}
- (id)initWithSegmentID:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 borderStyle:(id)arg3;
- (id)initWithSegmentID:(id)arg1 boxItems:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (id)segmentID;
- (id)boxItems;
- (id)titles;
- (UIEdgeInsets)edgeInsets;
- (id)borderStyle;
- (void).cxx_destruct;
@end

