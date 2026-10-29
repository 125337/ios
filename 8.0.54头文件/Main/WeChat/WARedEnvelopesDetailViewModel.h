@interface WARedEnvelopesDetailViewModel : NSObject
{
    unsigned int _wxahbStatus; // +0x8
    int _hbStatus; // +0xc
    int _receiveStatus; // +0x10
    unsigned int _rcvdNum; // +0x14
    unsigned int _totalNum; // +0x18
    int _hbType; // +0x1c
    int _isSender; // +0x20
    unsigned long long _amount; // +0x28
    unsigned long long _rcvdAmount; // +0x30
    unsigned long long _totalAmount; // +0x38
    NSMutableArray * _rcvdUserList; // +0x40
    NSString * _wishing; // +0x48
    NSString * _sendUsername; // +0x50
    NSString * _sendNickname; // +0x58
    NSString * _sendHeadimg; // +0x60
    NSString * _headTitle; // +0x68
    NSString * _amountTitle; // +0x70
    RealNameInfo * _realNameInfo; // +0x78
    NSString * _errorwording; // +0x80
}
- (id)initWithOpenResponse:(id)arg1;
- (id)initWithDetailResponse:(id)arg1;
- (unsigned int)wxahbStatus;
- (void)setWxahbStatus:(unsigned int)arg1;
- (int)hbStatus;
- (void)setHbStatus:(int)arg1;
- (int)receiveStatus;
- (void)setReceiveStatus:(int)arg1;
- (unsigned long long)amount;
- (void)setAmount:(unsigned long long)arg1;
- (unsigned int)rcvdNum;
- (void)setRcvdNum:(unsigned int)arg1;
- (unsigned long long)rcvdAmount;
- (void)setRcvdAmount:(unsigned long long)arg1;
- (unsigned int)totalNum;
- (void)setTotalNum:(unsigned int)arg1;
- (unsigned long long)totalAmount;
- (void)setTotalAmount:(unsigned long long)arg1;
- (int)hbType;
- (void)setHbType:(int)arg1;
- (id)rcvdUserList;
- (void)setRcvdUserList:(id)arg1;
- (id)wishing;
- (void)setWishing:(id)arg1;
- (id)sendUsername;
- (void)setSendUsername:(id)arg1;
- (id)sendNickname;
- (void)setSendNickname:(id)arg1;
- (id)sendHeadimg;
- (void)setSendHeadimg:(id)arg1;
- (int)isSender;
- (void)setIsSender:(int)arg1;
- (id)headTitle;
- (void)setHeadTitle:(id)arg1;
- (id)amountTitle;
- (void)setAmountTitle:(id)arg1;
- (id)realNameInfo;
- (void)setRealNameInfo:(id)arg1;
- (id)errorwording;
- (void)setErrorwording:(id)arg1;
- (void).cxx_destruct;
@end

