@interface _TtC6WeChat14FTSSectionData : NSObject
{
    unsigned long long type; // +0x8
    void * data; // +0x10
    long long searchItemCount; // +0x30
    BOOL disableCountLimit; // +0x38
    BOOL isLargeInputBox; // +0x39
    BOOL isReplaceText; // +0x3a
    unsigned int isFromVoice; // +0x3c
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (long long)searchItemCount;
- (void)setSearchItemCount:(long long)arg1;
- (BOOL)disableCountLimit;
- (void)setDisableCountLimit:(BOOL)arg1;
- (BOOL)isLargeInputBox;
- (void)setIsLargeInputBox:(BOOL)arg1;
- (BOOL)isReplaceText;
- (void)setIsReplaceText:(BOOL)arg1;
- (unsigned int)isFromVoice;
- (void)setIsFromVoice:(unsigned int)arg1;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
