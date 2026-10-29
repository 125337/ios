@interface KvReportItem26636 : KvReportBaseItem
{
    unsigned int _mode_21; // +0x8
    unsigned int _ret_22; // +0xc
    unsigned int _imageSize_23; // +0x10
    unsigned int _predictSize_24; // +0x14
    unsigned int _availableMem_25; // +0x18
    unsigned int _contentWidth_26; // +0x1c
    unsigned int _contentHeight_27; // +0x20
    unsigned int _isCompress_29; // +0x24
    unsigned int _costTime_30; // +0x28
    unsigned int _delayTime_31; // +0x2c
    unsigned int _imageWidth_32; // +0x30
    unsigned int _imageHeight_33; // +0x34
    unsigned int _realImageMem_35; // +0x38
    unsigned int _predictImageMem_36; // +0x3c
    unsigned int _eventType_38; // +0x40
    unsigned int _cropByLimitHeight_40; // +0x44
    unsigned int _originContentWidth_41; // +0x48
    unsigned int _originContentHeight_42; // +0x4c
    unsigned int _hasEditCrop_43; // +0x50
    unsigned int _isDregradePrinterMode_44; // +0x54
    NSString * _scaleFactor_28; // +0x58
    NSString * _pageUrl_34; // +0x60
    NSString * _errMsg_37; // +0x68
    NSString * _sessionId_39; // +0x70
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)mode_21;
- (void)setMode_21:(unsigned int)arg1;
- (unsigned int)ret_22;
- (void)setRet_22:(unsigned int)arg1;
- (unsigned int)imageSize_23;
- (void)setImageSize_23:(unsigned int)arg1;
- (unsigned int)predictSize_24;
- (void)setPredictSize_24:(unsigned int)arg1;
- (unsigned int)availableMem_25;
- (void)setAvailableMem_25:(unsigned int)arg1;
- (unsigned int)contentWidth_26;
- (void)setContentWidth_26:(unsigned int)arg1;
- (unsigned int)contentHeight_27;
- (void)setContentHeight_27:(unsigned int)arg1;
- (id)scaleFactor_28;
- (void)setScaleFactor_28:(id)arg1;
- (unsigned int)isCompress_29;
- (void)setIsCompress_29:(unsigned int)arg1;
- (unsigned int)costTime_30;
- (void)setCostTime_30:(unsigned int)arg1;
- (unsigned int)delayTime_31;
- (void)setDelayTime_31:(unsigned int)arg1;
- (unsigned int)imageWidth_32;
- (void)setImageWidth_32:(unsigned int)arg1;
- (unsigned int)imageHeight_33;
- (void)setImageHeight_33:(unsigned int)arg1;
- (id)pageUrl_34;
- (void)setPageUrl_34:(id)arg1;
- (unsigned int)realImageMem_35;
- (void)setRealImageMem_35:(unsigned int)arg1;
- (unsigned int)predictImageMem_36;
- (void)setPredictImageMem_36:(unsigned int)arg1;
- (id)errMsg_37;
- (void)setErrMsg_37:(id)arg1;
- (unsigned int)eventType_38;
- (void)setEventType_38:(unsigned int)arg1;
- (id)sessionId_39;
- (void)setSessionId_39:(id)arg1;
- (unsigned int)cropByLimitHeight_40;
- (void)setCropByLimitHeight_40:(unsigned int)arg1;
- (unsigned int)originContentWidth_41;
- (void)setOriginContentWidth_41:(unsigned int)arg1;
- (unsigned int)originContentHeight_42;
- (void)setOriginContentHeight_42:(unsigned int)arg1;
- (unsigned int)hasEditCrop_43;
- (void)setHasEditCrop_43:(unsigned int)arg1;
- (unsigned int)isDregradePrinterMode_44;
- (void)setIsDregradePrinterMode_44:(unsigned int)arg1;
- (void).cxx_destruct;
@end

