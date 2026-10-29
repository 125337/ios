@interface WCNewYearHBDetailDataForSns : NSObject
{
    int _hbType; // +0x8
    int _coverType; // +0xc
    unsigned int _hbSendID; // +0x10
    NSString * _username; // +0x18
    NSString * _coverUrl; // +0x20
    unsigned long long _money; // +0x28
    NSString * _praise; // +0x30
    NSMutableArray * _arrRewardItem; // +0x38
    CGSize _coverSize; // +0x40
}
- (int)hbType;
- (void)setHbType:(int)arg1;
- (int)coverType;
- (void)setCoverType:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned int)hbSendID;
- (void)setHbSendID:(unsigned int)arg1;
- (unsigned long long)money;
- (void)setMoney:(unsigned long long)arg1;
- (id)praise;
- (void)setPraise:(id)arg1;
- (id)arrRewardItem;
- (void)setArrRewardItem:(id)arg1;
- (CGSize)coverSize;
- (void)setCoverSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

