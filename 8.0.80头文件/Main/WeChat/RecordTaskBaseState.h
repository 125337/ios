@interface RecordTaskBaseState : NSObject
{
    CMessageWrap * _msgWrap; // +0x8
    NSString * _taskIdentifier; // +0x10
    MultiMediaUploadTask * _context; // +0x18
    FavoritesRecordDataField * _dataField; // +0x20
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (void)stop;
- (id)getStateName;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)taskIdentifier;
- (void)setTaskIdentifier:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)dataField;
- (void)setDataField:(id)arg1;
- (void).cxx_destruct;
@end
