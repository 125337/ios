@interface MMFinderLiveNoticePosterModel : NSObject
{
    BOOL _invalidateStyles; // +0x8
    BOOL _enableDescExtend; // +0x9
    BOOL _disableShare; // +0xa
    unsigned int _backgroundImageChangeDisablementFlag; // +0xc
    int _modifyEntranceStatus; // +0x10
    unsigned int _remainModifyQuota; // +0x14
    NSDictionary * _styledQrCodes; // +0x18
    UIImage * _fallbackQrCode; // +0x20
    NSString * _qrCodeContent; // +0x28
    NSString * _backgroundImageUri; // +0x30
    NSArray * _styles; // +0x38
    NSString * _selectedStyleId; // +0x40
    FinderLiveNoticeQRCodeResponse_PersonalColumnInfo * _columnInfo; // +0x48
    NSString * _shareDisableWording; // +0x50
}
- (id)initWithNoticeQrCodeResponse:(id)arg1;
- (id)initWithGenericLiveQrCodeResponse:(id)arg1;
- (id)initWithPreviewModel:(id)arg1;
- (unsigned long long)qrCodeEcLevelForContent:(id)arg1;
- (id)styledQrCodes;
- (void)setStyledQrCodes:(id)arg1;
- (id)fallbackQrCode;
- (void)setFallbackQrCode:(id)arg1;
- (id)qrCodeContent;
- (void)setQrCodeContent:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (unsigned int)backgroundImageChangeDisablementFlag;
- (void)setBackgroundImageChangeDisablementFlag:(unsigned int)arg1;
- (id)styles;
- (void)setStyles:(id)arg1;
- (BOOL)invalidateStyles;
- (void)setInvalidateStyles:(BOOL)arg1;
- (id)selectedStyleId;
- (void)setSelectedStyleId:(id)arg1;
- (id)columnInfo;
- (void)setColumnInfo:(id)arg1;
- (int)modifyEntranceStatus;
- (void)setModifyEntranceStatus:(int)arg1;
- (unsigned int)remainModifyQuota;
- (void)setRemainModifyQuota:(unsigned int)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (BOOL)disableShare;
- (void)setDisableShare:(BOOL)arg1;
- (id)shareDisableWording;
- (void)setShareDisableWording:(id)arg1;
- (void).cxx_destruct;
@end
