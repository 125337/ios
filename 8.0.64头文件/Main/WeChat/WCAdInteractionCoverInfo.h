@interface WCAdInteractionCoverInfo : NSObject <NSCoding>
{
    long long _coverType; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    unsigned long long _actionStartTime; // +0x20
    unsigned long long _actionEndTime; // +0x28
    unsigned long long _coverStartTime; // +0x30
    unsigned long long _coverEndTime; // +0x38
    NSString * _themePAGUrl; // +0x40
    NSString * _themePAGMD5; // +0x48
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (long long)coverType;
- (void)setCoverType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)actionStartTime;
- (void)setActionStartTime:(unsigned long long)arg1;
- (unsigned long long)actionEndTime;
- (void)setActionEndTime:(unsigned long long)arg1;
- (unsigned long long)coverStartTime;
- (void)setCoverStartTime:(unsigned long long)arg1;
- (unsigned long long)coverEndTime;
- (void)setCoverEndTime:(unsigned long long)arg1;
- (id)themePAGUrl;
- (void)setThemePAGUrl:(id)arg1;
- (id)themePAGMD5;
- (void)setThemePAGMD5:(id)arg1;
- (void).cxx_destruct;
@end
