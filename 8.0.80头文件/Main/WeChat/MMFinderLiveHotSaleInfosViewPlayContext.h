@interface MMFinderLiveHotSaleInfosViewPlayContext : NSObject
{
    FinderLiveGetProductCarouselResponse * _info; // +0x8
    FinderLiveGetProductCarouselResponse_FinderLiveProductCarouselItem * _current; // +0x10
    unsigned long long _nextIndex; // +0x18
}
- (id)info;
- (void)setInfo:(id)arg1;
- (id)current;
- (void)setCurrent:(id)arg1;
- (unsigned long long)nextIndex;
- (void)setNextIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
