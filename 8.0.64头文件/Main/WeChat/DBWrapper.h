@interface DBWrapper : NSObject <NSCopying>
{
    WCTDatabase * _db; // +0x8
    NSMutableArray * _arrMsgInfo; // +0x10
}
- (id)initWithDataBase:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)arrMsgInfo;
- (void)setArrMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end
