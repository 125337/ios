@interface _TtC6WeChat23WSSearchProcessReporter : WSReportBaseItem
{
     actionType; // +0x8
     scene; // +0xc
     sessionId; // +0x10
     subSessionId; // +0x20
     searchId; // +0x30
     offset; // +0x40
     isHomePage; // +0x44
     requestId; // +0x48
     successType; // +0x58
     query; // +0x60
     tagId; // +0x70
     bizType; // +0x80
     h5Version; // +0x88
     isPreload; // +0x8c
}
- (int)actionType;
- (void)setActionType:(int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isHomePage;
- (void)setIsHomePage:(BOOL)arg1;
- (int)successType;
- (void)setSuccessType:(int)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (void)assignValueWith:(id)arg1;
- (unsigned int)reportKvId;
- (void)doReport;
- (void)report:(int)arg1;
- (void)report:(int)arg1 with:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end

