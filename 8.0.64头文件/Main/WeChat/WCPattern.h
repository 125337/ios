@interface WCPattern : NSObject <NSCoding>
{
    WCDataItem * dataItem; // +0x8
    double lastAccessTime; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)lastAccessTime;
- (void)setLastAccessTime:(double)arg1;
- (void).cxx_destruct;
@end
