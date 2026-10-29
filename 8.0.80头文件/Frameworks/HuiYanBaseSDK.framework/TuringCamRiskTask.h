@interface TuringCamRiskTask : NSObject
{
    NSString * _scene; // +0x8
    TuringCamRiskService * _manager; // +0x10
}
- (id)initForScene:(id)arg1 Manager:(id)arg2;
- (void)monitorCameraWithDevice:(id)arg1 session:(id)arg2 previewView:(id)arg3;
- (void)monitorView:(id)arg1;
- (void)queryPostDataWithFaceID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)queryPostDataWithCompletionHandler:(id /* block */)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
