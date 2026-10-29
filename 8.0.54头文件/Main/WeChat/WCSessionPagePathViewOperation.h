@interface WCSessionPagePathViewOperation : MMObject <NSCopying>
{
    NSString * _pageName; // +0x8
    NSString * _viewId; // +0x10
    unsigned long long _action; // +0x18
    unsigned long long _timestampMs; // +0x20
    NSMutableArray * _businessParams; // +0x28
}
- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (unsigned long long)timestampMs;
- (void)setTimestampMs:(unsigned long long)arg1;
- (id)businessParams;
- (void)setBusinessParams:(id)arg1;
- (void).cxx_destruct;
@end

