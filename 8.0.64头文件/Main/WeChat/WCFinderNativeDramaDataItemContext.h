@interface WCFinderNativeDramaDataItemContext : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
}
+ (id)contextWithIdentifier:(unsigned long long)arg1;
+ (id)contextWithDataItem:(id)arg1;
- (BOOL)isNativeDrama;
- (BOOL)isNativeDramaCanPlay;
- (id)info;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
