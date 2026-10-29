@interface MMRTCSessionMenuResponder : MMRTCMenuResponder
{
    BOOL _bFromTranlateText; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
- (id)initWithMessageWrap:(id)arg1;
- (void)onTextFavorite:(id)arg1;
- (void)onWordFingertipSearch;
- (void)onTranslateText;
- (id)getSelectMenuItem;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)bFromTranlateText;
- (void)setBFromTranlateText:(BOOL)arg1;
- (void).cxx_destruct;
@end

