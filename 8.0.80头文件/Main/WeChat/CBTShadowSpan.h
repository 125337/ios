@interface CBTShadowSpan : NSObject
{
    long long _kind; // +0x8
    CBTAttachmentBaseView * _attachmentView; // +0x10
    NSDictionary * _userInfo; // +0x18
    _NSRange _shadowRange; // +0x20
    _NSRange _physicalRange; // +0x30
    _NSRange _localRange; // +0x40
}
- (long long)kind;
- (void)setKind:(long long)arg1;
- (_NSRange)shadowRange;
- (void)setShadowRange:(_NSRange)arg1;
- (_NSRange)physicalRange;
- (void)setPhysicalRange:(_NSRange)arg1;
- (_NSRange)localRange;
- (void)setLocalRange:(_NSRange)arg1;
- (id)attachmentView;
- (void)setAttachmentView:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
