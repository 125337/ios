@interface MMActionSheetMsgPreviewRowView : UIView
{
    BOOL _isRecordMode; // +0x8
    unsigned int _dataType; // +0xc
    MMUIButton * _rightButton; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    id /* block */ _handler; // +0x20
    CMessageWrap * _recordMsg; // +0x28
    NSString * _dataId; // +0x30
}
+ (id)rowViewWithMaxWidth:(double)arg1 msgWrap:(id)arg2 handler:(id /* block */)arg3;
+ (id)rowViewWithMaxWidth:(double)arg1 recordMsg:(id)arg2 dataId:(id)arg3 dataType:(unsigned int)arg4 handler:(id /* block */)arg5;
- (id)initWithMsgWrap:(id)arg1 maxWidth:(double)arg2;
- (id)initWithRecordMsg:(id)arg1 dataId:(id)arg2 dataType:(unsigned int)arg3 maxWidth:(double)arg4;
- (void)layoutSubviews;
- (void)initViews;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (BOOL)isRecordMode;
- (void)setIsRecordMode:(BOOL)arg1;
- (id)recordMsg;
- (void)setRecordMsg:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (unsigned int)dataType;
- (void)setDataType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
