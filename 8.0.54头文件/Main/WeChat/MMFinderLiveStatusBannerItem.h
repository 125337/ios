@interface MMFinderLiveStatusBannerItem : NSObject
{
    unsigned int _type; // +0x8
    MMUIView * _view; // +0x10
}
+ (id)buildStatusBannerItem:(unsigned int)arg1 view:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end

