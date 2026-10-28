@interface WASubscriptionMessagePageSheetViewModel : WAAuthPageSheetViewModel
{
    BOOL _keepOption; // +0x8
    BOOL _keepOptionHide; // +0x9
    int _style; // +0xc
    int _templateType; // +0x10
    unsigned int _appType; // +0x14
    unsigned long long _headerStyleOptions; // +0x18
    unsigned long long _footerStyleOptions; // +0x20
    unsigned long long _scene; // +0x28
    long long _errorCode; // +0x30
    NSString * _errorMessage; // +0x38
    NSString * _iconUrl; // +0x40
    NSString * _appName; // +0x48
    NSString * _applyDescription; // +0x50
    NSString * _mainDescription; // +0x58
    NSString * _subDescription; // +0x60
    NSString * _confirmWording; // +0x68
    NSString * _cancelWording; // +0x70
    NSString * _declineWording; // +0x78
    NSString * _keepOptionWording; // +0x80
    NSString * _detailTitle; // +0x88
    NSArray * _messageItems; // +0x90
    NSString * _templateIdListStr; // +0x98
    NSString * _templateOriginStatusListStr; // +0xa0
    NSString * _username; // +0xa8
    NSString * _appid; // +0xb0
    NSData * _buffer; // +0xb8
    unsigned long long _operationType; // +0xc0
    SubscribeMsgShowInfo * _showInfo; // +0xc8
    NSString * _kvUid; // +0xd0
}
- (id)init;
- (id)initWith:(id)arg1 scene:(unsigned long long)arg2 username:(id)arg3 appid:(id)arg4 appType:(unsigned int)arg5;
- (void)fillWithRes:(id)arg1 scene:(unsigned long long)arg2 username:(id)arg3 appid:(id)arg4 appType:(unsigned int)arg5;
- (unsigned long long)generateHeaderStyleOptionsWith:(id)arg1 style:(int)arg2 templateType:(int)arg3;
- (unsigned long long)generateFooterStyleOptionsWith:(id)arg1 scene:(unsigned long long)arg2 templateType:(int)arg3;
- (id)generateMessageItemsWith:(id)arg1;
- (BOOL)needsToShowPageSheet;
- (void)checkDataValidWithResultBlock:(id /* block */)arg1;
- (id)toMsgItemsReportString;
- (void)toInfoButtonClickReportStringResultBlock:(id /* block */)arg1;
- (id)toUIData;
- (id)generateTemplateIdListStr;
- (id)generateOriginStatusListStr;
- (int)style;
- (void)setStyle:(int)arg1;
- (unsigned long long)headerStyleOptions;
- (void)setHeaderStyleOptions:(unsigned long long)arg1;
- (unsigned long long)footerStyleOptions;
- (void)setFooterStyleOptions:(unsigned long long)arg1;
- (int)templateType;
- (void)setTemplateType:(int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)applyDescription;
- (void)setApplyDescription:(id)arg1;
- (id)mainDescription;
- (void)setMainDescription:(id)arg1;
- (id)subDescription;
- (void)setSubDescription:(id)arg1;
- (id)confirmWording;
- (void)setConfirmWording:(id)arg1;
- (id)cancelWording;
- (void)setCancelWording:(id)arg1;
- (id)declineWording;
- (void)setDeclineWording:(id)arg1;
- (id)keepOptionWording;
- (void)setKeepOptionWording:(id)arg1;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg1;
- (id)messageItems;
- (void)setMessageItems:(id)arg1;
- (id)templateIdListStr;
- (void)setTemplateIdListStr:(id)arg1;
- (id)templateOriginStatusListStr;
- (void)setTemplateOriginStatusListStr:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (BOOL)keepOption;
- (void)setKeepOption:(BOOL)arg1;
- (BOOL)keepOptionHide;
- (void)setKeepOptionHide:(BOOL)arg1;
- (unsigned long long)operationType;
- (void)setOperationType:(unsigned long long)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (id)kvUid;
- (void)setKvUid:(id)arg1;
- (void).cxx_destruct;
@end
