@interface WCFinderLongVideoKeepModel : MMObject <PBCoding>
{
    WCFinderMegaVideo * _megaVideo; // +0x8
    WCFinderContact * _contact; // +0x10
    double _playPosition; // +0x18
    WCFinderMediaInfo * _mediaInfo; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
}
+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_playPosition;
+ (void)PBArrayAdd_mediaInfo;
+ (void)PBArrayAdd_dataItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)megaVideo;
- (void)setMegaVideo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)playPosition;
- (void)setPlayPosition:(double)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

