@interface WCNewClickStatRecordPageItem : MMObject <NSCopying>
{
    unsigned int pageAction; // +0x8
    unsigned int timeStamp; // +0xc
    NSString * pageID; // +0x10
}
+ (id)pageItem:(id)arg1 withAction:(unsigned int)arg2 withTimeStamp:(unsigned int)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned int)pageAction;
- (void)setPageAction:(unsigned int)arg1;
- (id)pageID;
- (void)setPageID:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
