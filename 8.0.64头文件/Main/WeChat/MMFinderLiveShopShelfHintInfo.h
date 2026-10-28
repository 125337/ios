@interface MMFinderLiveShopShelfHintInfo : NSObject
{
    FinderShopShelfHintInfo * _pb; // +0x8
    long long _type; // +0x10
}
+ (id)infoWithPB:(id)arg1;
- (id)initWithPB:(id)arg1;
- (id)pb;
- (void)setPb:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (void).cxx_destruct;
@end
