@interface FBDocumentViewController : MMUIViewController
{
    id /* block */ _onOpeniCloud; // +0x70
    MMUILabel * _descLabel; // +0x78
    UIButton * _openButton; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)openiCloud;
- (id /* block */)onOpeniCloud;
- (void)setOnOpeniCloud:(id /* block */)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)openButton;
- (void)setOpenButton:(id)arg1;
- (void).cxx_destruct;
@end
