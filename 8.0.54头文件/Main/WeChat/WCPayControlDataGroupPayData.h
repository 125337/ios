@interface WCPayControlDataGroupPayData : NSObject
{
    BOOL _bIsImportFromSolitaire; // +0x8
    int _moneyConfirmMsgSeq; // +0xc
    CContact * _chatroomContact; // +0x10
    NSArray * _launchSelectedContacts; // +0x18
    NSArray * _launchIgnoreContacts; // +0x20
    unsigned long long _selectMemberSource; // +0x28
    NSString * _orderBillNum; // +0x30
    unsigned long long _fromScene; // +0x38
    unsigned long long _launchScene; // +0x40
    NSString * _outTradeNum; // +0x48
    NSString * _launcherUsername; // +0x50
    NSString * _payerUsername; // +0x58
    long long _presetAmount; // +0x60
    NSString * _presetTheme; // +0x68
    unsigned long long _presetLaunchType; // +0x70
    AAOperationRes * _groupPaySvrConfigData; // +0x78
    AALaunchByPersonRes * _activityAAResponse; // +0x80
    AAQueryDetailRes * _aaOrderDetailResponse; // +0x88
    AAPayRes * _orderPrepayResponse; // +0x90
    NSString * _pfAppId; // +0x98
    NSString * _pfOrderNo; // +0xa0
    QueryPfInfoRes * _pfQueryInfoResponse; // +0xa8
    NSMutableArray * _svrRetPfSelectedContacts; // +0xb0
    NSMutableDictionary * _svrRetPfUserPayAmountDict; // +0xb8
    NSString * _pfLaunchImageUrl; // +0xc0
    NSString * _pfLaunchThumbUrl; // +0xc8
    UIImage * _pfSelectedRemarkImage; // +0xd0
    NSString * _pfLaunchImageMd5; // +0xd8
    NSString * _orderPayerRemark; // +0xe0
    WCPayGPSolitaireData * _solitaireData; // +0xe8
    NSString * _payerSolitaireContent; // +0xf0
}
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (id)launchSelectedContacts;
- (void)setLaunchSelectedContacts:(id)arg1;
- (id)launchIgnoreContacts;
- (void)setLaunchIgnoreContacts:(id)arg1;
- (unsigned long long)selectMemberSource;
- (void)setSelectMemberSource:(unsigned long long)arg1;
- (id)orderBillNum;
- (void)setOrderBillNum:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (unsigned long long)launchScene;
- (void)setLaunchScene:(unsigned long long)arg1;
- (id)outTradeNum;
- (void)setOutTradeNum:(id)arg1;
- (id)launcherUsername;
- (void)setLauncherUsername:(id)arg1;
- (id)payerUsername;
- (void)setPayerUsername:(id)arg1;
- (int)moneyConfirmMsgSeq;
- (void)setMoneyConfirmMsgSeq:(int)arg1;
- (long long)presetAmount;
- (void)setPresetAmount:(long long)arg1;
- (id)presetTheme;
- (void)setPresetTheme:(id)arg1;
- (unsigned long long)presetLaunchType;
- (void)setPresetLaunchType:(unsigned long long)arg1;
- (id)groupPaySvrConfigData;
- (void)setGroupPaySvrConfigData:(id)arg1;
- (id)activityAAResponse;
- (void)setActivityAAResponse:(id)arg1;
- (id)aaOrderDetailResponse;
- (void)setAaOrderDetailResponse:(id)arg1;
- (id)orderPrepayResponse;
- (void)setOrderPrepayResponse:(id)arg1;
- (id)pfAppId;
- (void)setPfAppId:(id)arg1;
- (id)pfOrderNo;
- (void)setPfOrderNo:(id)arg1;
- (id)pfQueryInfoResponse;
- (void)setPfQueryInfoResponse:(id)arg1;
- (id)svrRetPfSelectedContacts;
- (void)setSvrRetPfSelectedContacts:(id)arg1;
- (id)svrRetPfUserPayAmountDict;
- (void)setSvrRetPfUserPayAmountDict:(id)arg1;
- (id)pfLaunchImageUrl;
- (void)setPfLaunchImageUrl:(id)arg1;
- (id)pfLaunchThumbUrl;
- (void)setPfLaunchThumbUrl:(id)arg1;
- (id)pfSelectedRemarkImage;
- (void)setPfSelectedRemarkImage:(id)arg1;
- (id)pfLaunchImageMd5;
- (void)setPfLaunchImageMd5:(id)arg1;
- (id)orderPayerRemark;
- (void)setOrderPayerRemark:(id)arg1;
- (id)solitaireData;
- (void)setSolitaireData:(id)arg1;
- (id)payerSolitaireContent;
- (void)setPayerSolitaireContent:(id)arg1;
- (BOOL)bIsImportFromSolitaire;
- (void)setBIsImportFromSolitaire:(BOOL)arg1;
- (void).cxx_destruct;
@end

