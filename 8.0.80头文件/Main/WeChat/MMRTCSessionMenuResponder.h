@interface MMRTCSessionMenuResponder : MMRTCMenuResponder
{
    BOOL _bFromTranlateText; // +0x8
    int _menuSourceType; // +0xc
    CMessageWrap * _msgWrap; // +0x10
    NSString * _buttonList; // +0x18
}
- (id)initWithMessageWrap:(id)arg1;
- (id)getMsgWrap;
- (id)createForwardMsgWithContent:(id)arg1;
- (void)onTextFavorite:(id)arg1;
- (void)onWordFingertipSearch;
- (void)onTranslateText;
- (void)onAddNote;
- (id)getSelectMenuItem;
- (void)onAskXiaoWei;
- (void)reportAskXiaoWeiExposure;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)bFromTranlateText;
- (void)setBFromTranlateText:(BOOL)arg1;
- (int)menuSourceType;
- (void)setMenuSourceType:(int)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (void).cxx_destruct;
@end
