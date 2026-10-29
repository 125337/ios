@interface WCShareCardBaseHeaderView : MMUIView <ILinkEventExt>
{
    BOOL _bIsShareCard; // +0x8
    BOOL _bIsNeedHideAcceptBtn; // +0x9
    int _cardStatus; // +0xc
    id <WCShareCardBaseCardHeaderDelegate> _baseDelegate; // +0x10
    WCCardDataCardInfo * _cardInfo; // +0x18
    WCCardDataCardTPInfo * _cardTPInfo; // +0x20
    NSString * _cardStatusTitle; // +0x28
    UIButton * _acceptCardBtn; // +0x30
    UrlLabel * _guidanceLabel; // +0x38
    id <WCCardDataSource> _cardDataSource; // +0x40
}
- (id)initWithCardSourceData:(id)arg1 isShareCard:(BOOL)arg2 cardStatus:(int)arg3 isNeedHideAccecptBtn:(BOOL)arg4 delegate:(id)arg5;
- (void)initBaseData;
- (id)genCardStatusNotNormalBtnView;
- (id)getInvalidAcceptBtnTitleIfExist;
- (void)genAcceptBtnAreaWithCardContentBottm:(double)arg1;
- (BOOL)isHasAcceptedBtn;
- (CGRect)getApplyBtnFrame;
- (double)getRealHeight;
- (void)onShareCardAction;
- (void)acceptMyCard:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (id)cardTPInfo;
- (void)setCardTPInfo:(id)arg1;
- (int)cardStatus;
- (void)setCardStatus:(int)arg1;
- (id)cardStatusTitle;
- (void)setCardStatusTitle:(id)arg1;
- (BOOL)bIsShareCard;
- (void)setBIsShareCard:(BOOL)arg1;
- (BOOL)bIsNeedHideAcceptBtn;
- (void)setBIsNeedHideAcceptBtn:(BOOL)arg1;
- (id)acceptCardBtn;
- (void)setAcceptCardBtn:(id)arg1;
- (id)guidanceLabel;
- (void)setGuidanceLabel:(id)arg1;
- (id)cardDataSource;
- (void)setCardDataSource:(id)arg1;
- (void).cxx_destruct;
@end
