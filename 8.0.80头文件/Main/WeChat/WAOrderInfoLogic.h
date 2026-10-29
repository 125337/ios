@interface WAOrderInfoLogic : MMObject <PBMessageObserverDelegate>
{
    WAOrderInfoModel * _orderInfo; // +0x8
    id /* block */ _orderInfoRespAction; // +0x10
    id /* block */ _dissmissOrderRedDotRespAction; // +0x18
}
- (void)requestOrderInfoWithCompleteAction:(id /* block */)arg1;
- (void)requestReportOpenWxaOrderWithCompleteAction:(id /* block */)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)orderInfo;
- (id /* block */)orderInfoRespAction;
- (void)setOrderInfoRespAction:(id /* block */)arg1;
- (id /* block */)dissmissOrderRedDotRespAction;
- (void)setDissmissOrderRedDotRespAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
