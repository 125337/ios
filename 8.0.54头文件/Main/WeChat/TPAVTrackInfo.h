@interface TPAVTrackInfo : NSObject
{
    BOOL _isSelected; // +0x8
    AVMediaSelectionOption * _option; // +0x10
    AVMediaSelectionGroup * _group; // +0x18
}
- (id)option;
- (void)setOption:(id)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

