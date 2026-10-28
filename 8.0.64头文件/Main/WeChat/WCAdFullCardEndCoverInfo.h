@interface WCAdFullCardEndCoverInfo : NSObject <NSCoding>
{
    NSString * _title; // +0x8
    NSString * _titleImageUrl; // +0x10
    NSString * _desc; // +0x18
    NSString * _actionTitle; // +0x20
    NSString * _ambientImageUrl; // +0x28
    unsigned long long _endCoverEndTime; // +0x30
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleImageUrl;
- (void)setTitleImageUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (id)ambientImageUrl;
- (void)setAmbientImageUrl:(id)arg1;
- (unsigned long long)endCoverEndTime;
- (void)setEndCoverEndTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
