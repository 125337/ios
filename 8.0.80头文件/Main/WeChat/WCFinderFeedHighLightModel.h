@interface WCFinderFeedHighLightModel : NSObject
{
    BOOL _isHidePostTimeLabel; // +0x8
    NSString * _normalNickName; // +0x10
    NSMutableArray * _nameHightkeywords; // +0x18
    NSString * _normalText; // +0x20
    NSMutableArray * _textHightkeywords; // +0x28
}
+ (id)formatMediaTitle:(id)arg1;
- (void)updateWithDataItem:(id)arg1;
- (id)normalNickName;
- (void)setNormalNickName:(id)arg1;
- (id)nameHightkeywords;
- (void)setNameHightkeywords:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)textHightkeywords;
- (void)setTextHightkeywords:(id)arg1;
- (BOOL)isHidePostTimeLabel;
- (void)setIsHidePostTimeLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end
