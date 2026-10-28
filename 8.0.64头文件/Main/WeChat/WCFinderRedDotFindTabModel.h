@interface WCFinderRedDotFindTabModel : NSObject <PBCoding>
{
    WCFinderBusinessTabModel * _finderModel; // +0x8
    WCFinderBusinessTabModel * _liveModel; // +0x10
    WCFinderBusinessTabModel * _socialHotModel; // +0x18
}
+ (void)PBArrayAdd_finderModel;
+ (void)PBArrayAdd_liveModel;
+ (void)PBArrayAdd_socialHotModel;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)socialHotModel;
- (id)finderModel;
- (id)liveModel;
- (void)increaseExposeCount:(unsigned long long)arg1;
- (void)increaseClickCount:(unsigned long long)arg1;
- (void)_updateModel:(unsigned long long)arg1;
- (long long)getExposeCount:(unsigned long long)arg1;
- (long long)getClickCount:(unsigned long long)arg1;
- (void)setFinderModel:(id)arg1;
- (void)setLiveModel:(id)arg1;
- (void)setSocialHotModel:(id)arg1;
- (void).cxx_destruct;
@end
