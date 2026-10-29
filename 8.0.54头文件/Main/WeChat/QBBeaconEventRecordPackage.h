@interface QBBeaconEventRecordPackage : NSObject <QBBeaconAnaNSObjTransToJceBufferProtocol>
{
    NSArray * list; // +0x8
}
- (id)createWUPModel;
- (id)getPkgElements;
- (void)addPkgElements:(id)arg1;
- (id)getDataToBuffer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)list;
- (void)setList:(id)arg1;
@end

