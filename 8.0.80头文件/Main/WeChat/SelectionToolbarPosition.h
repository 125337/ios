@interface SelectionToolbarPosition : NSObject
{
    NSNumber * _anchorAboveX; // +0x8
    NSNumber * _anchorAboveY; // +0x10
    NSNumber * _anchorBelowX; // +0x18
    NSNumber * _anchorBelowY; // +0x20
    NSNumber * _lineHeight; // +0x28
}
+ (id)makeWithAnchorAboveX:(id)arg1 anchorAboveY:(id)arg2 anchorBelowX:(id)arg3 anchorBelowY:(id)arg4 lineHeight:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)anchorAboveX;
- (void)setAnchorAboveX:(id)arg1;
- (id)anchorAboveY;
- (void)setAnchorAboveY:(id)arg1;
- (id)anchorBelowX;
- (void)setAnchorBelowX:(id)arg1;
- (id)anchorBelowY;
- (void)setAnchorBelowY:(id)arg1;
- (id)lineHeight;
- (void)setLineHeight:(id)arg1;
- (void).cxx_destruct;
@end
