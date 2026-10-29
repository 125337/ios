@interface GameNoticeInfo : NSObject
{
    BOOL _hasAdditionalInfo; // +0x8
    BOOL _hasCheckBtn; // +0x9
    BOOL _checkState; // +0xa
    NSString * _noticeIconUrl; // +0x10
    NSString * _noticeTitle; // +0x18
    GameNoticeAdditionalInfo * _additionalInfo; // +0x20
    NSString * _buttonTitle; // +0x28
    NSString * _checkTitle; // +0x30
}
- (id)noticeIconUrl;
- (void)setNoticeIconUrl:(id)arg1;
- (id)noticeTitle;
- (void)setNoticeTitle:(id)arg1;
- (BOOL)hasAdditionalInfo;
- (void)setHasAdditionalInfo:(BOOL)arg1;
- (id)additionalInfo;
- (void)setAdditionalInfo:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (BOOL)hasCheckBtn;
- (void)setHasCheckBtn:(BOOL)arg1;
- (id)checkTitle;
- (void)setCheckTitle:(id)arg1;
- (BOOL)checkState;
- (void)setCheckState:(BOOL)arg1;
- (void).cxx_destruct;
@end

