@interface IntelligentClassificationData : IntelligentMediaItem
{
    unsigned int _classificationTime; // +0x28
    NSArray * _arrClassificationItem; // +0x30
}
- (BOOL)checkHadFaceAlbumClassificationLabelId;
- (id)arrClassificationItem;
- (void)setArrClassificationItem:(id)arg1;
- (unsigned int)classificationTime;
- (void)setClassificationTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
