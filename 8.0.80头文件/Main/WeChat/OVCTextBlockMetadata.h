@interface OVCTextBlockMetadata : NSObject
{
    BOOL _isUsingPlaceholder; // +0x8
    BOOL _isEditable; // +0x9
    NSString * _textBlockID; // +0x10
    unsigned long long _textBlockType; // +0x18
    NSString * _textBlockName; // +0x20
    NSString * _textBlockContent; // +0x28
    NSString * _textBlockText; // +0x30
    NSString * _defaultContent; // +0x38
    NSString * _placeholder; // +0x40
}
- (id)initWithTextBlockID:(id)arg1 textBlockType:(unsigned long long)arg2 textBlockName:(id)arg3 textBlockContent:(id)arg4 textBlockText:(id)arg5 isUsingPlaceholder:(BOOL)arg6 isEditable:(BOOL)arg7 defaultContent:(id)arg8 placeholder:(id)arg9;
- (id)textBlockID;
- (unsigned long long)textBlockType;
- (id)textBlockName;
- (id)textBlockContent;
- (id)textBlockText;
- (BOOL)isUsingPlaceholder;
- (BOOL)isEditable;
- (id)defaultContent;
- (id)placeholder;
- (void).cxx_destruct;
@end
