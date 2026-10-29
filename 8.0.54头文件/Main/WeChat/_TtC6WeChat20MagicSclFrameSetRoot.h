@interface _TtC6WeChat20MagicSclFrameSetRoot : NSObject
{
     target; // +0x8
     appId; // +0x10
     instanceName; // +0x20
     appContextId; // +0x30
     path; // +0x40
     query; // +0x50
     useClientClick; // +0x60
     rootId; // +0x68
     delegate; // +0x78
     boundFrameSets; // +0x88
}
- (id)rootId;
- (id)getOrCreateFrameSetWithFrameSetName:(id)arg1;
- (void)dataChangeWithSpecificFrameSetNameWithData:(id)arg1 frameSetName:(id)arg2 extInfo:(id)arg3;
- (void)dataChangeWithData:(id)arg1 extInfo:(id)arg2;
- (void)redraw;
- (void)pause;
- (void)resume;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

