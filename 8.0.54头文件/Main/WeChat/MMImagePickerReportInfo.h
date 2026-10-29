@interface MMImagePickerReportInfo : MMObject
{
    BOOL _isOriginalImage; // +0x8
    BOOL _isFinalSend; // +0x9
    BOOL _hasPreviewSelected; // +0xa
    BOOL _hasOrderSelectedInPreviewAll; // +0xb
    BOOL _hasClickSelectedInPreviewAll; // +0xc
    BOOL _hasOrderSelectedInPreviewSelected; // +0xd
    BOOL _hasClickSelectedInPreviewSelected; // +0xe
    BOOL _hasSwitchAlbum; // +0xf
    BOOL _isUseSlider; // +0x10
    int _pickerScene; // +0x14
    int _selectedPicCount; // +0x18
    int _selectedGifCount; // +0x1c
    int _selectedVideoCount; // +0x20
    int _sendImageCountFromDragSelect; // +0x24
    int _sendVideoCountFromDragSelect; // +0x28
    NSString * _sendSessionID; // +0x30
    long long _finalFinishScene; // +0x38
    long long _sendPicCountFromDefault; // +0x40
    long long _sendPicCountFromOther; // +0x48
    unsigned long long _startTimeStamp; // +0x50
    NSMutableArray * _assetReportInfos; // +0x58
}
- (id)sendSessionID;
- (void)setSendSessionID:(id)arg1;
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (long long)finalFinishScene;
- (void)setFinalFinishScene:(long long)arg1;
- (int)selectedPicCount;
- (void)setSelectedPicCount:(int)arg1;
- (int)selectedGifCount;
- (void)setSelectedGifCount:(int)arg1;
- (int)selectedVideoCount;
- (void)setSelectedVideoCount:(int)arg1;
- (int)sendImageCountFromDragSelect;
- (void)setSendImageCountFromDragSelect:(int)arg1;
- (int)sendVideoCountFromDragSelect;
- (void)setSendVideoCountFromDragSelect:(int)arg1;
- (BOOL)isOriginalImage;
- (void)setIsOriginalImage:(BOOL)arg1;
- (BOOL)isFinalSend;
- (void)setIsFinalSend:(BOOL)arg1;
- (BOOL)hasPreviewSelected;
- (void)setHasPreviewSelected:(BOOL)arg1;
- (BOOL)hasOrderSelectedInPreviewAll;
- (void)setHasOrderSelectedInPreviewAll:(BOOL)arg1;
- (BOOL)hasClickSelectedInPreviewAll;
- (void)setHasClickSelectedInPreviewAll:(BOOL)arg1;
- (BOOL)hasOrderSelectedInPreviewSelected;
- (void)setHasOrderSelectedInPreviewSelected:(BOOL)arg1;
- (BOOL)hasClickSelectedInPreviewSelected;
- (void)setHasClickSelectedInPreviewSelected:(BOOL)arg1;
- (BOOL)hasSwitchAlbum;
- (void)setHasSwitchAlbum:(BOOL)arg1;
- (long long)sendPicCountFromDefault;
- (void)setSendPicCountFromDefault:(long long)arg1;
- (long long)sendPicCountFromOther;
- (void)setSendPicCountFromOther:(long long)arg1;
- (unsigned long long)startTimeStamp;
- (void)setStartTimeStamp:(unsigned long long)arg1;
- (id)assetReportInfos;
- (void)setAssetReportInfos:(id)arg1;
- (BOOL)isUseSlider;
- (void)setIsUseSlider:(BOOL)arg1;
- (void).cxx_destruct;
@end

