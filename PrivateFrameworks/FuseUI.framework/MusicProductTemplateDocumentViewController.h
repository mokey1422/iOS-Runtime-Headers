/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring> {
    UIViewController<MusicClientContextConsuming><SKUINavigationBarDisplayConfiguring> *_productViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2;
- (BOOL)managesNavigationBarContents;
- (int)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (id)previewMenuItems;
- (void)setClientContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end