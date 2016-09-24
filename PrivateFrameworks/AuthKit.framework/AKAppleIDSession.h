/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSLock * _anisetteControllerLock;
    AKAnisetteProvisioningController * _nativeAnisetteController;
    AKDevice * _pairedDevice;
    AKAnisetteProvisioningController * _pairedDeviceAnisetteController;
    AKAnisetteData * _proxiedAnisetteData;
    NSString * _serviceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AKDevice *pairedDevice;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_generateAppleIDHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)_nativeAnisetteController;
- (id)_pairedDeviceAnisetteController;
- (id)appleIDHeadersForRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)pairedDevice;
- (id)relevantHTTPStatusCodes;
- (void)setPairedDevice:(id)arg1;

@end