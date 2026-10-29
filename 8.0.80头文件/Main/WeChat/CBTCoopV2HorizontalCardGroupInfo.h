@interface CBTCoopV2HorizontalCardGroupInfo : NSObject
{
    BOOL _isGroupHead; // +0x8
    BOOL _isGroupContinuation; // +0x9
    CBTCoopV2HorizontalCardGroupViewModel * _groupViewModel; // +0x10
    _NSRange _range; // +0x18
}
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (BOOL)isGroupHead;
- (void)setIsGroupHead:(BOOL)arg1;
- (BOOL)isGroupContinuation;
- (void)setIsGroupContinuation:(BOOL)arg1;
- (id)groupViewModel;
- (void)setGroupViewModel:(id)arg1;
- (void).cxx_destruct;
@end
