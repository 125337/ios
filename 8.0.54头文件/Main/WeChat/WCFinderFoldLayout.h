@interface WCFinderFoldLayout : NSObject
{
    unsigned long long _layoutType; // +0x8
    NSMutableArray * _dataItems; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _totalCount; // +0x20
}
+ (id)layoutWithFoldLayout:(id)arg1;
- (id)initWithFoldLayout:(id)arg1;
- (id)description;
- (id)title;
- (id)titleForScene:(unsigned long long)arg1;
- (id)nickName;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

