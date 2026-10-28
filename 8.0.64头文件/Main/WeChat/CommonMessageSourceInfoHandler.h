@interface CommonMessageSourceInfoHandler : NSObject
{
    unsigned int _fromScene; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
+ (id)createWithMsgWrap:(id)arg1;
+ (BOOL)canCreateWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1;
- (id)sourceIcon:(CGSize)arg1 color:(id)arg2;
- (id)sourceTitle;
- (BOOL)canClick;
- (void)handleClickWithViewController:(id)arg1;
- (id)msgWrap;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
