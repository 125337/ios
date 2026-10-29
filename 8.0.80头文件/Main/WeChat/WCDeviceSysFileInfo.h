@interface WCDeviceSysFileInfo : NSObject
{
    NSString * _createDate; // +0x8
    NSString * _modifyDate; // +0x10
    NSString * _fileNumber; // +0x18
}
- (id)createDate;
- (void)setCreateDate:(id)arg1;
- (id)modifyDate;
- (void)setModifyDate:(id)arg1;
- (id)fileNumber;
- (void)setFileNumber:(id)arg1;
- (void).cxx_destruct;
@end
