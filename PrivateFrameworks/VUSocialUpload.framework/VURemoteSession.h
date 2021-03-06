/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@interface VURemoteSession : SLRemoteSession {
    ACAccountStore *_accountStore;
}

@property (nonatomic, retain) ACAccountStore *accountStore;

+ (void)decrementPowerAssertion;
+ (void)incrementPowerAssertion;
+ (void)refreshPowerAssertion;

- (void).cxx_destruct;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;

@end
