@interface WCSnsABTestTitle : NSObject
{
    NSString * showTitleFormat; // +0x8
    BOOL hasUserNameKey; // +0x10
    BOOL hasSexKey; // +0x11
    NSString * maleKey; // +0x18
    NSString * femailKey; // +0x20
    NSString * defaultSexKey; // +0x28
    NSString * richTextKey; // +0x30
}
- (id)init;
- (id)description;
- (BOOL)parseTitleFormat:(id)arg1 priorTitleFormat:(id)arg2;
- (BOOL)tryParseTitleFormat:(id)arg1;
- (id)richTextKey;
- (void)setRichTextKey:(id)arg1;
- (void).cxx_destruct;
@end

