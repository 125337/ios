@interface _TtC6WeChat14FTSSectionData : NSObject
{
     type; // +0x8
     data; // +0x10
     searchItemCount; // +0x30
     disableCountLimit; // +0x38
     isLargeInputBox; // +0x39
     isReplaceText; // +0x3a
     isFromVoice; // +0x3b
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
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
