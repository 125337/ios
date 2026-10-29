@interface WCFinderHeadContactInfoLayoutCache : NSObject
{
    BOOL _hasChangeFontSize; // +0x8
    BOOL _lineBreakByClipping; // +0x9
    NSMapTable * _otherViewLayoutTable; // +0x10
    unsigned long long _currentShowLineType; // +0x18
    UIFont * _nameFont; // +0x20
    unsigned long long _lineNumber; // +0x28
    CGRect _nicknameRect; // +0x30
}
+ (id)cacheWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (id)init;
- (void)cacheWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (void)recoverWithNameTextView:(id)arg1 otherViews:(id)arg2;
- (id)otherViewLayoutTable;
- (void)setOtherViewLayoutTable:(id)arg1;
- (unsigned long long)currentShowLineType;
- (void)setCurrentShowLineType:(unsigned long long)arg1;
- (BOOL)hasChangeFontSize;
- (void)setHasChangeFontSize:(BOOL)arg1;
- (CGRect)nicknameRect;
- (void)setNicknameRect:(CGRect)arg1;
- (id)nameFont;
- (void)setNameFont:(id)arg1;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (void).cxx_destruct;
@end

