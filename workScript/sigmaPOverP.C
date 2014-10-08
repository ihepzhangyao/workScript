{
  ////draw sigma P vs p
  //double a = 1./(sqrt(2)*200); //0.5%@1GeV
  TF1 *fa1 = new TF1("fa1","0.00353553*sqrt(1+x*x)",0.,2.);
  fa1->Draw();
}
