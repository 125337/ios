@interface WCFinderLikePrivacyGuideParams : NSObject
{
    BOOL _autoDismissAfterAction; // +0x8
    int _commentScene; // +0xc
    int _styleType; // +0x10
    unsigned long long _type; // +0x18
    NSDictionary * _wordingMap; // +0x20
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)autoDismissAfterAction;
- (void)setAutoDismissAfterAction:(BOOL)arg1;
- (int)styleType;
- (void)setStyleType:(int)arg1;
- (id)wordingMap;
- (void)setWordingMap:(id)arg1;
- (void).cxx_destruct;
@end
