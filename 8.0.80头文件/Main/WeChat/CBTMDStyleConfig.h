@interface CBTMDStyleConfig : NSObject
{
    double _paragraphSpacing; // +0x8
    CBTMDStyle * _plainText; // +0x10
    NSArray * _heading; // +0x18
    CBTMDStyle * _inlineCode; // +0x20
    CBTMDStyle * _codeblockLan; // +0x28
    CBTMDStyle * _codeblockContent; // +0x30
    CBTMDStyle * _tableHeader; // +0x38
    CBTMDStyle * _tableContent; // +0x40
    double _scale; // +0x48
}
+ (long long)baseFontSize;
+ (id)styleConfigWithScale:(double)arg1;
+ (id)defaultStyleConfig;
+ (id)asstStyleConfig;
+ (id)chatStyleConfig;
+ (id)chatTextFloatStyleConfig;
+ (id)chatThinkingStyleConfig;
- (id)description;
- (void)scaleFontsByRatio:(double)arg1;
- (double)paragraphSpacing;
- (void)setParagraphSpacing:(double)arg1;
- (id)plainText;
- (void)setPlainText:(id)arg1;
- (id)heading;
- (void)setHeading:(id)arg1;
- (id)inlineCode;
- (void)setInlineCode:(id)arg1;
- (id)codeblockLan;
- (void)setCodeblockLan:(id)arg1;
- (id)codeblockContent;
- (void)setCodeblockContent:(id)arg1;
- (id)tableHeader;
- (void)setTableHeader:(id)arg1;
- (id)tableContent;
- (void)setTableContent:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (void).cxx_destruct;
@end
