@interface BizAppMessageBaseInfoModel : NSObject
{
    id /* block */ _sourceNicknameChanged; // +0x8
    CContact * _bizContact; // +0x10
    BizAppMessageData * _data; // +0x18
}
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2;
- (void)dealloc;
- (id)thumbSquareUrl;
- (id)thumbImage;
- (id)sourceIcon;
- (id)sourceNickname;
- (id)sourceUsrname;
- (id)sourceDetailStr;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (id /* block */)sourceNicknameChanged;
- (void)setSourceNicknameChanged:(id /* block */)arg1;
- (id)bizContact;
- (void)setBizContact:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
