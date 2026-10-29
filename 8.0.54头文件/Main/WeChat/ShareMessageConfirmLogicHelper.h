@interface ShareMessageConfirmLogicHelper : MMObject <ShareConfirmViewDelegate>
{
    ShareConfirmView * _confirmView; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    id <ShareMessageConfirmLogicHelperDelegate> _delegate; // +0x18
    NSData * _imageData; // +0x20
    NSString * _thumbImageUrl; // +0x28
    unsigned int _scene; // +0x30
    BOOL _isShowTextView; // +0x34
    BOOL _isAddMessage; // +0x35
    BOOL _isAddTextMessage; // +0x36
    BOOL _isShowSendSuccessView; // +0x37
    unsigned int _style; // +0x38
    BOOL _hasBeenHidden; // +0x3c
    NSDictionary * _userData; // +0x40
}
- (id)initWithMessageWrap:(id)arg1 isShowTextView:(BOOL)arg2 andAppScene:(unsigned int)arg3;
- (void)dealloc;
- (void)setConfirmViewStyle:(unsigned long long)arg1;
- (void)showConfirmViewWithInputText:(id)arg1 showText:(id)arg2;
- (void)showConfirmViewWithInputText:(id)arg1;
- (void)showConfirmView;
- (void)hideConfirmView;
- (void)rotateToCurrentOrietation;
- (void)rotateToOrientaion:(long long)arg1;
- (void)OnSend:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (BOOL)isAddMessage;
- (void)setIsAddMessage:(BOOL)arg1;
- (BOOL)isAddTextMessage;
- (void)setIsAddTextMessage:(BOOL)arg1;
- (BOOL)isShowSendSuccessView;
- (void)setIsShowSendSuccessView:(BOOL)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (void).cxx_destruct;
@end

